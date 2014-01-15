<?php
/**
 * @file
 * Context reaction of active fellowship.
 */


class context_reaction_active_fellowships extends context_reaction {
    function execute(&$vars = NULL){

        $fellowship = "NONE";

        drupal_set_message(t("You are currently in %fellowship.", array('%fellowship' => $fellowship)));
    }
}
