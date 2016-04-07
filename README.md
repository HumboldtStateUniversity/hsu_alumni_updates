# HSU Alumni Updates
Drupal 7: Creates a content type, view to display updates, and a feeds importer to grab content.

This module, created using Features, creates a content type for alumni updates. In addition it creates a feeds importer and a view to display the updates.


##Install

* Copy hsu_alumni_updates and dependencies (if not there already) in sites/all/module
* Turn on the module
* Visit http://sitename/import
* Click on Alumni Updates
* Insert url for feed: http://magazine.humboldt.edu/name-of-feed (obtained from webadmin@humboldt.edu)

_The description field is set to full-html to properly parse the RSS feed. Depending on the text formats setup on your site you may need to edit the importer to use a format that will parse the description field properly._
