describe('HatoholIncidentTrackerEditor', function() {
  var editor;

  beforeEach(function() {
    editor = undefined;
  });

  afterEach(function() {
    if (editor)
      editor.closeDialog();
  });

  it('new', function() {
    var expectedId = "#incident-tracker-editor";
    editor = new HatoholIncidentTrackerEditor({});
    expect(editor).not.to.be(undefined);
    expect($(expectedId)).to.have.length(1);
    var buttons = $(expectedId).dialog("option", "buttons");
    expect(buttons).to.have.length(2);
    expect(buttons[0].text).to.be(gettext("ADD"));
    expect(buttons[1].text).to.be(gettext("CANCEL"));
  });
});
