/*
 * Copyright (C) 2014 Project Hatohol
 *
 * This file is part of Hatohol.
 *
 * Hatohol is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License, version 3
 * as published by the Free Software Foundation.
 *
 * Hatohol is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with Hatohol. If not, see
 * <http://www.gnu.org/licenses/>.
 */

#ifndef IncidentSenderHatohol_h
#define IncidentSenderHatohol_h

#include "IncidentSender.h"

class IncidentSenderHatohol : public IncidentSender
{
public:
	IncidentSenderHatohol(const IncidentTrackerInfo &tracker);
	virtual ~IncidentSenderHatohol();

	virtual HatoholError send(const EventInfo &event) override;

	virtual HatoholError send(const IncidentInfo &incident,
				  const std::string &comment) override;

private:
	struct Impl;
	std::unique_ptr<Impl> m_impl;
};

#endif // IncidentSenderHatohol_h
