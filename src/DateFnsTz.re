[@bs.module "date-fns-tz"] external zonedTimeToUtc: Js.Date.t => Js.Date.t = "zonedTimeToUtc";

[@bs.module "date-fns-tz"] external utcToZonedTime: Js.Date.t => Js.Date.t = "utcToZonedTime";

[@bs.module "date-fns-tz"] external internal_format: (Js.Date.t, string) => string = "format";

[@bs.module "date-fns-tz"]
external internal_formatWithOptions: (Js.Date.t, string, {. "timeZone": string}) => Js.Date.t =
  "format";

let format = (str, date) => internal_format(date, str);

let formatWithOptions = (str, options, date) => internal_formatWithOptions(date, str, options);

[@bs.module "date-fns-tz"] external toDate: string => Js.Date.t = "toDate";
