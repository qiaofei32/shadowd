/**
 * Shadow Daemon -- Web Application Firewall
 *
 *   Copyright (C) 2014-2015 Hendrik Buchwald <hb@zecure.org>
 *
 * This file is part of Shadow Daemon. Shadow Daemon is free software: you can
 * redistribute it and/or modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation, version 2.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * In addition, as a special exception, the copyright holders give
 * permission to link the code of portions of this program with the
 * OpenSSL library under certain conditions as described in each
 * individual source file, and distribute linked combinations
 * including the two.
 * You must obey the GNU General Public License in all respects
 * for all of the code used other than OpenSSL.  If you modify
 * file(s) with this exception, you may extend this exception to your
 * version of the file(s), but you are not obligated to do so.  If you
 * do not wish to do so, delete this exception statement from your
 * version.  If you delete this exception statement from all source
 * files in the program, then also delete it here.
 */

#include "profile.h"

swd::profile::profile(std::string server_ip, int id, int mode, bool whitelist_enabled,
 bool blacklist_enabled, bool integrity_enabled, bool flooding_enabled, std::string key,
 int blacklist_threshold) :
 server_ip_(server_ip),
 id_(id),
 mode_(mode),
 whitelist_enabled_(whitelist_enabled),
 blacklist_enabled_(blacklist_enabled),
 integrity_enabled_(integrity_enabled),
 flooding_enabled_(flooding_enabled),
 key_(key),
 blacklist_threshold_(blacklist_threshold) {
}

int swd::profile::get_id() {
	return id_;
}

int swd::profile::get_mode() {
	return mode_;
}

bool swd::profile::is_whitelist_enabled() {
	return whitelist_enabled_;
}

bool swd::profile::is_blacklist_enabled() {
	return blacklist_enabled_;
}

bool swd::profile::is_integrity_enabled() {
	return integrity_enabled_;
}

bool swd::profile::is_flooding_enabled() {
	return flooding_enabled_;
}

std::string swd::profile::get_key() {
	return key_;
}

int swd::profile::get_blacklist_threshold() {
	return blacklist_threshold_;
}

std::string swd::profile::get_server_ip() {
	return server_ip_;
}
