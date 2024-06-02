#include "InternetData.h"

#include <array>
#include <string_view>

namespace faker
{
const std::array<std::string_view, 6> domainSuffixes = {
    "biz", "com", "info", "name", "net", "org",
};

const std::array<std::string_view, 5> emailHosts = {
    "gmail.com", "hotmail.com", "outlook.com", "proton.me", "yahoo.com",
};

const std::array<std::string_view, 3> emailExampleHosts = {
    "example.com",
    "example.net",
    "example.org",
};

const std::array<std::string_view, 156> smileyEmojis = {
    "☠️",
    "☹️",
    "☺️",
    "❣️",
    "❤️",
    "❤️‍🔥",
    "❤️‍🩹",
    "👁️‍🗨️",
    "👹",
    "👺",
    "👻",
    "👽",
    "👾",
    "👿",
    "💀",
    "💋",
    "💌",
    "💓",
    "💔",
    "💕",
    "💖",
    "💗",
    "💘",
    "💙",
    "💚",
    "💛",
    "💜",
    "💝",
    "💞",
    "💟",
    "💢",
    "💣",
    "💤",
    "💥",
    "💦",
    "💨",
    "💩",
    "💫",
    "💬",
    "💭",
    "💯",
    "🕳️",
    "🖤",
    "🗨️",
    "🗯️",
    "😀",
    "😁",
    "😂",
    "😃",
    "😄",
    "😅",
    "😆",
    "😇",
    "😈",
    "😉",
    "😊",
    "😋",
    "😌",
    "😍",
    "😎",
    "😏",
    "😐",
    "😑",
    "😒",
    "😓",
    "😔",
    "😕",
    "😖",
    "😗",
    "😘",
    "😙",
    "😚",
    "😛",
    "😜",
    "😝",
    "😞",
    "😟",
    "😠",
    "😡",
    "😢",
    "😣",
    "😤",
    "😥",
    "😦",
    "😧",
    "😨",
    "😩",
    "😪",
    "😫",
    "😬",
    "😭",
    "😮",
    "😮‍💨",
    "😯",
    "😰",
    "😱",
    "😲",
    "😳",
    "😴",
    "😵",
    "😵‍💫",
    "😶",
    "😶‍🌫️",
    "😷",
    "😸",
    "😹",
    "😺",
    "😻",
    "😼",
    "😽",
    "😾",
    "😿",
    "🙀",
    "🙁",
    "🙂",
    "🙃",
    "🙄",
    "🙈",
    "🙉",
    "🙊",
    "🤍",
    "🤎",
    "🤐",
    "🤑",
    "🤒",
    "🤓",
    "🤔",
    "🤕",
    "🤖",
    "🤗",
    "🤠",
    "🤡",
    "🤢",
    "🤣",
    "🤤",
    "🤥",
    "🤧",
    "🤨",
    "🤩",
    "🤪",
    "🤫",
    "🤬",
    "🤭",
    "🤮",
    "🤯",
    "🥰",
    "🥱",
    "🥲",
    "🥳",
    "🥴",
    "🥵",
    "🥶",
    "🥸",
    "🥺",
    "🧐",
    "🧡",
};

const std::array<std::string_view, 246> bodyEmojis = {
    "☝️",    "☝🏻",  "☝🏼",  "☝🏽",  "☝🏾",  "☝🏿",  "✊",   "✊🏻", "✊🏼", "✊🏽", "✊🏾", "✊🏿", "✋",   "✋🏻",
    "✋🏼", "✋🏽", "✋🏾", "✋🏿", "✌️",    "✌🏻",  "✌🏼",  "✌🏽",  "✌🏾",  "✌🏿",  "✍️",    "✍🏻",  "✍🏼",  "✍🏽",
    "✍🏾",  "✍🏿",  "👀",   "👁️",   "👂",   "👂🏻", "👂🏼", "👂🏽", "👂🏾", "👂🏿", "👃",   "👃🏻", "👃🏼", "👃🏽",
    "👃🏾", "👃🏿", "👄",   "👅",   "👆",   "👆🏻", "👆🏼", "👆🏽", "👆🏾", "👆🏿", "👇",   "👇🏻", "👇🏼", "👇🏽",
    "👇🏾", "👇🏿", "👈",   "👈🏻", "👈🏼", "👈🏽", "👈🏾", "👈🏿", "👉",   "👉🏻", "👉🏼", "👉🏽", "👉🏾", "👉🏿",
    "👊",   "👊🏻", "👊🏼", "👊🏽", "👊🏾", "👊🏿", "👋",   "👋🏻", "👋🏼", "👋🏽", "👋🏾", "👋🏿", "👌",   "👌🏻",
    "👌🏼", "👌🏽", "👌🏾", "👌🏿", "👍",   "👍🏻", "👍🏼", "👍🏽", "👍🏾", "👍🏿", "👎",   "👎🏻", "👎🏼", "👎🏽",
    "👎🏾", "👎🏿", "👏",   "👏🏻", "👏🏼", "👏🏽", "👏🏾", "👏🏿", "👐",   "👐🏻", "👐🏼", "👐🏽", "👐🏾", "👐🏿",
    "💅",   "💅🏻", "💅🏼", "💅🏽", "💅🏾", "💅🏿", "💪",   "💪🏻", "💪🏼", "💪🏽", "💪🏾", "💪🏿", "🖐️",   "🖐🏻",
    "🖐🏼", "🖐🏽", "🖐🏾", "🖐🏿", "🖕",   "🖕🏻", "🖕🏼", "🖕🏽", "🖕🏾", "🖕🏿", "🖖",   "🖖🏻", "🖖🏼", "🖖🏽",
    "🖖🏾", "🖖🏿", "🙌",   "🙌🏻", "🙌🏼", "🙌🏽", "🙌🏾", "🙌🏿", "🙏",   "🙏🏻", "🙏🏼", "🙏🏽", "🙏🏾", "🙏🏿",
    "🤌",   "🤌🏻", "🤌🏼", "🤌🏽", "🤌🏾", "🤌🏿", "🤏",   "🤏🏻", "🤏🏼", "🤏🏽", "🤏🏾", "🤏🏿", "🤘",   "🤘🏻",
    "🤘🏼", "🤘🏽", "🤘🏾", "🤘🏿", "🤙",   "🤙🏻", "🤙🏼", "🤙🏽", "🤙🏾", "🤙🏿", "🤚",   "🤚🏻", "🤚🏼", "🤚🏽",
    "🤚🏾", "🤚🏿", "🤛",   "🤛🏻", "🤛🏼", "🤛🏽", "🤛🏾", "🤛🏿", "🤜",   "🤜🏻", "🤜🏼", "🤜🏽", "🤜🏾", "🤜🏿",
    "🤝",   "🤞",   "🤞🏻", "🤞🏼", "🤞🏽", "🤞🏾", "🤞🏿", "🤟",   "🤟🏻", "🤟🏼", "🤟🏽", "🤟🏾", "🤟🏿", "🤲",
    "🤲🏻", "🤲🏼", "🤲🏽", "🤲🏾", "🤲🏿", "🤳",   "🤳🏻", "🤳🏼", "🤳🏽", "🤳🏾", "🤳🏿", "🦴",   "🦵",   "🦵🏻",
    "🦵🏼", "🦵🏽", "🦵🏾", "🦵🏿", "🦶",   "🦶🏻", "🦶🏼", "🦶🏽", "🦶🏾", "🦶🏿", "🦷",   "🦻",   "🦻🏻", "🦻🏼",
    "🦻🏽", "🦻🏾", "🦻🏿", "🦾",   "🦿",   "🧠",   "🫀",   "🫁",
};

const std::array<std::string_view, 122> personEmojis = {
    "⛷️",
    "⛹️",
    "⛹️‍♀️",
    "⛹️‍♂️",
    "👧",
    "👨",
    "👨‍⚕️",
    "👨‍⚖️",
    "👨‍✈️",
    "👨‍❤️‍👨",
    "👨‍❤️‍💋‍👨",
    "👨‍🌾",
    "👨‍🍳",
    "👨‍🍼",
    "👨‍🦯",
    "👨‍🦰",
    "👨‍🦱",
    "👨‍🦲",
    "👨‍🦳",
    "👨‍🦼",
    "👨‍🦽",
    "👮‍♀️",
    "👰‍♀️",
    "👰‍♂️",
    "👰🏻",
    "👱‍♀️",
    "👱‍♂️",
    "👳‍♀️",
    "💆‍♀️",
    "💆‍♂️",
    "🙇",
    "🙇‍♀️",
    "🙇‍♂️",
    "🙋",
    "🙋‍♀️",
    "🙋‍♂️",
    "🙎",
    "🙎‍♀️",
    "🚣",
    "🚣‍♀️",
    "🚣‍♂️",
    "🚴‍♀️",
    "🚴‍♂️",
    "🚵",
    "🚵‍♀️",
    "🚵‍♂️",
    "🚶",
    "🚶‍♀️",
    "🚶‍♂️",
    "🤦",
    "🤦‍♀️",
    "🤦‍♂️",
    "🤰",
    "🤱",
    "🤴",
    "🤵",
    "🤵‍♀️",
    "🤵‍♂️",
    "🤷",
    "🤷‍♀️",
    "🤷‍♂️",
    "🤸",
    "🤸‍♀️",
    "🤹",
    "🤺",
    "🤼",
    "🤼‍♀️",
    "🤼‍♂️",
    "🤽",
    "🤾",
    "🤾‍♀️",
    "🦸‍♀️",
    "🧍",
    "🧎",
    "🧏",
    "🧏‍♀️",
    "🧑",
    "🧑‍⚕️",
    "🧑‍⚖️",
    "🧑‍✈️",
    "🧑‍🌾",
    "🧑‍🍳",
    "🧑‍🍼",
    "🧑‍💼",
    "🧑‍🔧",
    "🧑‍🔬",
    "🧑‍🚀",
    "🧑‍🚒",
    "🧑‍🤝‍🧑",
    "🧑‍🦯",
    "🧑‍🦰",
    "🧑‍🦱",
    "🧑‍🦲",
    "🧑‍🦳",
    "🧑‍🦼",
    "🧖",
    "🧖‍♀️",
    "🧖‍♂️",
    "🧗‍♀️",
    "🧗‍♂️",
    "🧘",
    "🧘‍♀️",
    "🧙",
    "🧙‍♀️",
    "🧙‍♂️",
    "🧚",
    "🧚‍♀️",
    "🧚‍♂️",
    "🧛",
    "🧛‍♀️",
    "🧛‍♂️",
    "🧜",
    "🧜‍♀️",
    "🧜‍♂️",
    "🧝‍♀️",
    "🧝‍♂️",
    "🧞",
    "🧞‍♀️",
    "🧞‍♂️",
    "🧟",
    "🧟‍♀️",
    "🧟‍♂️",
};

const std::array<std::string_view, 140> natureEmojis = {
    "☘️",           "🌱",
    "🌲",          "🌳",
    "🌴",          "🌵",
    "🌷",          "🌸",
    "🌹",          "🌺",
    "🌻",          "🌼",
    "🌾",          "🌿",
    "🍀",          "🍁",
    "🍂",          "🍃",
    "🏵️",          "🐀",
    "🐁",          "🐂",
    "🐃",          "🐄",
    "🐅",          "🐆",
    "🐇",          "🐈",
    "🐈‍⬛",  "🐉",
    "🐊",          "🐋",
    "🐌",          "🐍",
    "🐎",          "🐏",
    "🐐",          "🐑",
    "🐒",          "🐓",
    "🐔",          "🐕",
    "🐕‍🦺", "🐖",
    "🐗",          "🐘",
    "🐙",          "🐚",
    "🐛",          "🐜",
    "🐝",          "🐞",
    "🐟",          "🐠",
    "🐡",          "🐢",
    "🐣",          "🐤",
    "🐥",          "🐦",
    "🐧",          "🐨",
    "🐩",          "🐪",
    "🐫",          "🐬",
    "🐭",          "🐮",
    "🐯",          "🐰",
    "🐱",          "🐲",
    "🐳",          "🐴",
    "🐵",          "🐶",
    "🐷",          "🐸",
    "🐹",          "🐺",
    "🐻",          "🐻‍❄️",
    "🐼",          "🐽",
    "🐾",          "🐿️",
    "💐",          "💮",
    "🕊️",          "🕷️",
    "🕸️",          "🥀",
    "🦁",          "🦂",
    "🦃",          "🦄",
    "🦅",          "🦆",
    "🦇",          "🦈",
    "🦉",          "🦊",
    "🦋",          "🦌",
    "🦍",          "🦎",
    "🦏",          "🦒",
    "🦓",          "🦔",
    "🦕",          "🦖",
    "🦗",          "🦘",
    "🦙",          "🦚",
    "🦛",          "🦜",
    "🦝",          "🦟",
    "🦠",          "🦡",
    "🦢",          "🦣",
    "🦤",          "🦥",
    "🦦",          "🦧",
    "🦨",          "🦩",
    "🦫",          "🦬",
    "🦭",          "🦮",
    "🪰",          "🪱",
    "🪲",          "🪳",
    "🪴",          "🪶",
};

const std::array<std::string_view, 129> foodEmojis = {
    "☕", "🌭", "🌮", "🌯", "🌰", "🌶️", "🌽", "🍄", "🍅", "🍆", "🍇", "🍈", "🍉", "🍊", "🍋", "🍌", "🍍", "🍎", "🍏",
    "🍐", "🍑", "🍒", "🍓", "🍔", "🍕", "🍖", "🍗", "🍘", "🍙", "🍚", "🍛", "🍜", "🍝", "🍞", "🍟", "🍠", "🍡", "🍢",
    "🍣", "🍤", "🍥", "🍦", "🍧", "🍨", "🍩", "🍪", "🍫", "🍬", "🍭", "🍮", "🍯", "🍰", "🍱", "🍲", "🍳", "🍴", "🍵",
    "🍶", "🍷", "🍸", "🍹", "🍺", "🍻", "🍼", "🍽️", "🍾", "🍿", "🎂", "🏺", "🔪", "🥂", "🥃", "🥄", "🥐", "🥑", "🥒",
    "🥓", "🥔", "🥕", "🥖", "🥗", "🥘", "🥙", "🥚", "🥛", "🥜", "🥝", "🥞", "🥟", "🥠", "🥡", "🥢", "🥣", "🥤", "🥥",
    "🥦", "🥧", "🥨", "🥩", "🥪", "🥫", "🥬", "🥭", "🥮", "🥯", "🦀", "🦐", "🦑", "🦞", "🦪", "🧀", "🧁", "🧂", "🧃",
    "🧄", "🧅", "🧆", "🧇", "🧈", "🧉", "🧊", "🧋", "🫐", "🫑", "🫒", "🫓", "🫔", "🫕", "🫖",
};

const std::array<std::string_view, 215> travelEmojis = {
    "⌚", "⌛", "⏰", "⏱️",  "⏲️",  "⏳", "☀️",  "☁️",  "☂️",  "☃️",  "☄️",  "☔", "♨️",  "⚓", "⚡", "⛄", "⛅", "⛈️",
    "⛩️",  "⛪", "⛰️",  "⛱️",  "⛲", "⛴️",  "⛵", "⛺", "⛽", "✈️",  "❄️",  "⭐", "🌀", "🌁", "🌂", "🌃", "🌄", "🌅",
    "🌆", "🌇", "🌈", "🌉", "🌊", "🌋", "🌌", "🌍", "🌎", "🌏", "🌐", "🌑", "🌒", "🌓", "🌔", "🌕", "🌖", "🌗",
    "🌘", "🌙", "🌚", "🌛", "🌜", "🌝", "🌞", "🌟", "🌠", "🌡️", "🌤️", "🌥️", "🌦️", "🌧️", "🌨️", "🌩️", "🌪️", "🌫️",
    "🌬️", "🎠", "🎡", "🎢", "🎪", "🏍️", "🏎️", "🏔️", "🏕️", "🏖️", "🏗️", "🏘️", "🏙️", "🏚️", "🏛️", "🏜️", "🏝️", "🏞️",
    "🏟️", "🏠", "🏡", "🏢", "🏣", "🏤", "🏥", "🏦", "🏨", "🏩", "🏪", "🏫", "🏬", "🏭", "🏯", "🏰", "💈", "💒",
    "💧", "💺", "🔥", "🕋", "🕌", "🕍", "🕐", "🕑", "🕒", "🕓", "🕔", "🕕", "🕖", "🕗", "🕘", "🕙", "🕚", "🕛",
    "🕜", "🕝", "🕞", "🕟", "🕠", "🕡", "🕢", "🕣", "🕤", "🕥", "🕦", "🕧", "🕰️", "🗺️", "🗻", "🗼", "🗽", "🗾",
    "🚀", "🚁", "🚂", "🚃", "🚄", "🚅", "🚆", "🚇", "🚈", "🚉", "🚊", "🚋", "🚌", "🚍", "🚎", "🚏", "🚐", "🚑",
    "🚒", "🚓", "🚔", "🚕", "🚖", "🚗", "🚘", "🚙", "🚚", "🚛", "🚜", "🚝", "🚞", "🚟", "🚠", "🚡", "🚢", "🚤",
    "🚥", "🚦", "🚧", "🚨", "🚲", "🛎️",  "🛑", "🛕", "🛖", "🛢️",  "🛣️",  "🛤️",  "🛥️",  "🛩️",  "🛫", "🛬", "🛰️",  "🛳️",
    "🛴", "🛵", "🛶", "🛸", "🛹", "🛺", "🛻", "🛼", "🦼", "🦽", "🧭", "🧱", "🧳", "🪂", "🪐", "🪨", "🪵",
};

const std::array<std::string_view, 84> activityEmojis = {
    "♟️",  "♠️",  "♣️",  "♥️",  "♦️",  "⚽", "⚾", "⛳", "⛸️",  "✨", "🀄", "🃏", "🎀", "🎁", "🎃", "🎄", "🎆",
    "🎇", "🎈", "🎉", "🎊", "🎋", "🎍", "🎎", "🎏", "🎐", "🎑", "🎖️", "🎗️", "🎟️", "🎣", "🎨", "🎫", "🎭",
    "🎮", "🎯", "🎰", "🎱", "🎲", "🎳", "🎴", "🎽", "🎾", "🎿", "🏀", "🏅", "🏆", "🏈", "🏉", "🏏", "🏐",
    "🏑", "🏒", "🏓", "🏸", "🔮", "🕹️", "🖼️", "🛷", "🤿", "🥅", "🥇", "🥈", "🥉", "🥊", "🥋", "🥌", "🥍",
    "🥎", "🥏", "🧧", "🧨", "🧩", "🧵", "🧶", "🧸", "🧿", "🪀", "🪁", "🪄", "🪅", "🪆", "🪡", "🪢",
};

const std::array<std::string_view, 250> objectEmojis = {
    "⌨️",  "☎️",  "⚒️",  "⚔️",  "⚖️",  "⚗️",  "⚙️",  "⚰️",  "⚱️",  "⛏️",  "⛑️",  "⛓️",  "✂️",  "✉️",  "✏️",  "✒️",  "🎒", "🎓",
    "🎙️", "🎚️", "🎛️", "🎞️", "🎤", "🎥", "🎧", "🎩", "🎬", "🎵", "🎶", "🎷", "🎸", "🎹", "🎺", "🎻", "🎼", "🏮",
    "🏷️", "🏹", "👑", "👒", "👓", "👔", "👕", "👖", "👗", "👘", "👙", "👚", "👛", "👜", "👝", "👞", "👟", "👠",
    "👡", "👢", "💄", "💉", "💊", "💍", "💎", "💡", "💰", "💳", "💴", "💵", "💶", "💷", "💸", "💹", "💻", "💼",
    "💽", "💾", "💿", "📀", "📁", "📂", "📃", "📄", "📅", "📆", "📇", "📈", "📉", "📊", "📋", "📌", "📍", "📎",
    "📏", "📐", "📑", "📒", "📓", "📔", "📕", "📖", "📗", "📘", "📙", "📚", "📜", "📝", "📞", "📟", "📠", "📡",
    "📢", "📣", "📤", "📥", "📦", "📧", "📨", "📩", "📪", "📫", "📬", "📭", "📮", "📯", "📰", "📱", "📲", "📷",
    "📸", "📹", "📺", "📻", "📼", "📽️", "📿", "🔇", "🔈", "🔉", "🔊", "🔋", "🔌", "🔍", "🔎", "🔏", "🔐", "🔑",
    "🔒", "🔓", "🔔", "🔕", "🔖", "🔗", "🔦", "🔧", "🔨", "🔩", "🔫", "🔬", "🔭", "🕯️", "🕶️", "🖇️", "🖊️", "🖋️",
    "🖌️", "🖍️", "🖥️", "🖨️", "🖱️", "🖲️", "🗂️", "🗃️", "🗄️", "🗑️", "🗒️", "🗓️", "🗜️", "🗝️", "🗞️", "🗡️", "🗳️", "🗿",
    "🚪", "🚬", "🚽", "🚿", "🛁", "🛋️",  "🛍️",  "🛏️",  "🛒", "🛗", "🛠️",  "🛡️",  "🥁", "🥻", "🥼", "🥽", "🥾", "🥿",
    "🦯", "🦺", "🧢", "🧣", "🧤", "🧥", "🧦", "🧪", "🧫", "🧬", "🧮", "🧯", "🧰", "🧲", "🧴", "🧷", "🧹", "🧺",
    "🧻", "🧼", "🧽", "🧾", "🩰", "🩱", "🩲", "🩳", "🩴", "🩸", "🩹", "🩺", "🪃", "🪑", "🪒", "🪓", "🪔", "🪕",
    "🪖", "🪗", "🪘", "🪙", "🪚", "🪛", "🪜", "🪝", "🪞", "🪟", "🪠", "🪣", "🪤", "🪥", "🪦", "🪧",
};

const std::array<std::string_view, 220> symbolEmojis = {
    "#️⃣",  "*️⃣",  "0️⃣",  "1️⃣",  "2️⃣",  "3️⃣",  "4️⃣",  "5️⃣",  "6️⃣",  "7️⃣",  "8️⃣",  "9️⃣",  "©️",  "®️",  "‼️",  "⁉️",  "™️",  "ℹ️",  "↔️",
    "↕️",  "↖️",  "↗️",  "↘️",  "↙️",  "↩️",  "↪️",  "⏏️",  "⏩", "⏪", "⏫", "⏬", "⏭️",  "⏮️",  "⏯️",  "⏸️",  "⏹️",  "⏺️",  "Ⓜ️",
    "▪️",  "▫️",  "▶️",  "◀️",  "◻️",  "◼️",  "◽", "◾", "☑️",  "☢️",  "☣️",  "☦️",  "☪️",  "☮️",  "☯️",  "☸️",  "♀️",  "♂️",  "♈",
    "♉", "♊", "♋", "♌", "♍", "♎", "♏", "♐", "♑", "♒", "♓", "♻️",  "♾️",  "♿", "⚕️",  "⚛️",  "⚜️",  "⚠️",  "⚧️",
    "⚪", "⚫", "⛎", "⛔", "✅", "✔️",  "✖️",  "✝️",  "✡️",  "✳️",  "✴️",  "❇️",  "❌", "❎", "❓", "❔", "❕", "❗", "➕",
    "➖", "➗", "➡️",  "➰", "➿", "⤴️",  "⤵️",  "⬅️",  "⬆️",  "⬇️",  "⬛", "⬜", "⭕", "〰️", "〽️", "㊗️", "㊙️", "🅰️",  "🅱️",
    "🅾️",  "🅿️",  "🆎", "🆑", "🆒", "🆓", "🆔", "🆕", "🆖", "🆗", "🆘", "🆙", "🆚", "🈁", "🈂️", "🈚", "🈯", "🈲", "🈳",
    "🈴", "🈵", "🈶", "🈷️", "🈸", "🈹", "🈺", "🉐", "🉑", "🎦", "🏧", "💠", "💱", "💲", "📛", "📳", "📴", "📵", "📶",
    "🔀", "🔁", "🔂", "🔃", "🔄", "🔅", "🔆", "🔘", "🔙", "🔚", "🔛", "🔜", "🔝", "🔞", "🔟", "🔠", "🔡", "🔢", "🔣",
    "🔤", "🔯", "🔰", "🔱", "🔲", "🔳", "🔴", "🔵", "🔶", "🔷", "🔸", "🔹", "🔺", "🔻", "🔼", "🔽", "🕉️", "🕎", "🚫",
    "🚭", "🚮", "🚯", "🚰", "🚱", "🚳", "🚷", "🚸", "🚹", "🚺", "🚻", "🚼", "🚾", "🛂", "🛃", "🛄", "🛅", "🛐", "🟠",
    "🟡", "🟢", "🟣", "🟤", "🟥", "🟦", "🟧", "🟨", "🟩", "🟪", "🟫",
};

const std::array<std::string_view, 266> flagEmojis = {
    "🇦🇨",
    "🇦🇩",
    "🇦🇪",
    "🇦🇫",
    "🇦🇬",
    "🇦🇮",
    "🇦🇱",
    "🇦🇲",
    "🇦🇴",
    "🇦🇶",
    "🇦🇷",
    "🇦🇸",
    "🇦🇹",
    "🇦🇺",
    "🇦🇼",
    "🇦🇽",
    "🇦🇿",
    "🇧🇦",
    "🇧🇧",
    "🇧🇩",
    "🇧🇪",
    "🇧🇫",
    "🇧🇬",
    "🇧🇭",
    "🇧🇮",
    "🇧🇯",
    "🇧🇱",
    "🇧🇲",
    "🇧🇳",
    "🇧🇴",
    "🇧🇶",
    "🇧🇷",
    "🇧🇸",
    "🇧🇹",
    "🇧🇻",
    "🇧🇼",
    "🇧🇾",
    "🇧🇿",
    "🇨🇦",
    "🇨🇨",
    "🇨🇩",
    "🇨🇫",
    "🇨🇬",
    "🇨🇭",
    "🇨🇮",
    "🇨🇰",
    "🇨🇱",
    "🇨🇲",
    "🇨🇳",
    "🇨🇴",
    "🇨🇵",
    "🇨🇷",
    "🇨🇺",
    "🇨🇻",
    "🇨🇼",
    "🇨🇽",
    "🇨🇾",
    "🇨🇿",
    "🇩🇪",
    "🇩🇬",
    "🇩🇯",
    "🇩🇰",
    "🇩🇲",
    "🇩🇴",
    "🇩🇿",
    "🇪🇦",
    "🇪🇨",
    "🇪🇪",
    "🇪🇬",
    "🇪🇭",
    "🇪🇷",
    "🇪🇸",
    "🇪🇹",
    "🇪🇺",
    "🇫🇮",
    "🇫🇯",
    "🇫🇰",
    "🇫🇲",
    "🇫🇴",
    "🇫🇷",
    "🇬🇦",
    "🇬🇧",
    "🇬🇩",
    "🇬🇪",
    "🇬🇫",
    "🇬🇬",
    "🇬🇭",
    "🇬🇮",
    "🇬🇱",
    "🇬🇲",
    "🇬🇳",
    "🇬🇵",
    "🇬🇶",
    "🇬🇷",
    "🇬🇸",
    "🇬🇹",
    "🇬🇺",
    "🇬🇼",
    "🇬🇾",
    "🇭🇰",
    "🇭🇲",
    "🇭🇳",
    "🇭🇷",
    "🇭🇹",
    "🇭🇺",
    "🇮🇨",
    "🇮🇩",
    "🇮🇪",
    "🇮🇱",
    "🇮🇲",
    "🇮🇳",
    "🇮🇴",
    "🇮🇶",
    "🇮🇷",
    "🇮🇸",
    "🇮🇹",
    "🇯🇪",
    "🇯🇲",
    "🇯🇴",
    "🇯🇵",
    "🇰🇪",
    "🇰🇬",
    "🇰🇭",
    "🇰🇮",
    "🇰🇲",
    "🇰🇳",
    "🇰🇵",
    "🇰🇷",
    "🇰🇼",
    "🇰🇾",
    "🇰🇿",
    "🇱🇦",
    "🇱🇧",
    "🇱🇨",
    "🇱🇮",
    "🇱🇰",
    "🇱🇷",
    "🇱🇸",
    "🇱🇹",
    "🇱🇺",
    "🇱🇻",
    "🇱🇾",
    "🇲🇦",
    "🇲🇨",
    "🇲🇩",
    "🇲🇪",
    "🇲🇫",
    "🇲🇬",
    "🇲🇭",
    "🇲🇰",
    "🇲🇱",
    "🇲🇲",
    "🇲🇳",
    "🇲🇴",
    "🇲🇵",
    "🇲🇶",
    "🇲🇷",
    "🇲🇸",
    "🇲🇹",
    "🇲🇺",
    "🇲🇻",
    "🇲🇼",
    "🇲🇽",
    "🇲🇾",
    "🇲🇿",
    "🇳🇦",
    "🇳🇨",
    "🇳🇪",
    "🇳🇫",
    "🇳🇬",
    "🇳🇮",
    "🇳🇱",
    "🇳🇴",
    "🇳🇵",
    "🇳🇷",
    "🇳🇺",
    "🇳🇿",
    "🇴🇲",
    "🇵🇦",
    "🇵🇪",
    "🇵🇫",
    "🇵🇬",
    "🇵🇭",
    "🇵🇰",
    "🇵🇱",
    "🇵🇲",
    "🇵🇳",
    "🇵🇷",
    "🇵🇸",
    "🇵🇹",
    "🇵🇼",
    "🇵🇾",
    "🇶🇦",
    "🇷🇪",
    "🇷🇴",
    "🇷🇸",
    "🇷🇺",
    "🇷🇼",
    "🇸🇦",
    "🇸🇧",
    "🇸🇨",
    "🇸🇩",
    "🇸🇪",
    "🇸🇬",
    "🇸🇭",
    "🇸🇮",
    "🇸🇯",
    "🇸🇰",
    "🇸🇱",
    "🇸🇲",
    "🇸🇳",
    "🇸🇴",
    "🇸🇷",
    "🇸🇸",
    "🇸🇹",
    "🇸🇻",
    "🇸🇽",
    "🇸🇾",
    "🇸🇿",
    "🇹🇦",
    "🇹🇨",
    "🇹🇩",
    "🇹🇫",
    "🇹🇬",
    "🇹🇭",
    "🇹🇯",
    "🇹🇰",
    "🇹🇱",
    "🇹🇲",
    "🇹🇳",
    "🇹🇴",
    "🇹🇷",
    "🇹🇹",
    "🇹🇻",
    "🇹🇼",
    "🇹🇿",
    "🇺🇦",
    "🇺🇬",
    "🇺🇲",
    "🇺🇳",
    "🇺🇸",
    "🇺🇾",
    "🇺🇿",
    "🇻🇦",
    "🇻🇨",
    "🇻🇪",
    "🇻🇬",
    "🇻🇮",
    "🇻🇳",
    "🇻🇺",
    "🇼🇫",
    "🇼🇸",
    "🇽🇰",
    "🇾🇪",
    "🇾🇹",
    "🇿🇦",
    "🇿🇲",
    "🇿🇼",
    "🎌",
    "🏁",
    "🏳️",
    "🏳️‍⚧️",
    "🏳️‍🌈",
    "🏴",
    "🏴‍☠️",
    "🚩",
};

const std::array<std::string_view, 45> httpMediaTypes = {"application/gzip",
                                                         "application/java-archive",
                                                         "application/json",
                                                         "application/octet-stream",
                                                         "application/pdf",
                                                         "application/rtf",
                                                         "application/vnd.amazon.ebook",
                                                         "application/vnd.mozilla.xul+xml",
                                                         "application/x-7z-compressed",
                                                         "application/x-abiword",
                                                         "application/x-bzip",
                                                         "application/x-bzip2",
                                                         "application/x-csh",
                                                         "application/x-freearc",
                                                         "application/xml",
                                                         "application/zip",
                                                         "audio/3gpp",
                                                         "audio/3gpp2",
                                                         "audio/aac",
                                                         "audio/mpeg",
                                                         "audio/wav",
                                                         "audio/webm",
                                                         "font/otf",
                                                         "font/ttf",
                                                         "font/woff",
                                                         "font/woff2",
                                                         "image/bmp",
                                                         "image/gif",
                                                         "image/jpeg",
                                                         "image/png",
                                                         "image/tiff",
                                                         "image/webp",
                                                         "text/calendar",
                                                         "text/css",
                                                         "text/csv",
                                                         "text/html",
                                                         "text/javascript",
                                                         "text/plain",
                                                         "text/xml",
                                                         "video/3gpp",
                                                         "video/3gpp2",
                                                         "video/mp2t",
                                                         "video/mpeg",
                                                         "video/webm",
                                                         "video/x-msvideo"};

const std::array<std::string_view, 41> httpRequestHeaders = {
    "A-IM",
    "Accept",
    "Accept-Charset",
    "Accept-Datetime",
    "Accept-Encoding",
    "Accept-Language",
    "Access-Control-Request-Headers",
    "Access-Control-Request-Method",
    "Authorization",
    "Cache-Control",
    "Connection",
    "Content-Encoding",
    "Content-Length",
    "Content-MD5",
    "Content-Type",
    "Cookie",
    "Date",
    "Expect",
    "Forwarded",
    "From",
    "HTTP2-Settings",
    "Host",
    "If-Match",
    "If-Modified-Since",
    "If-None-Match",
    "If-Range",
    "If-Unmodified-Since",
    "Max-Forwards",
    "Origin",
    "Pragma",
    "Prefer",
    "Proxy-Authorization",
    "Range",
    "Referer",
    "TE",
    "Transfer-Encoding",
    "Upgrade",
    "Upgrade",
    "User-Agent",
    "Via",
    "Warning",
};

const std::array<std::string_view, 44> httpResponseHeaders = {
    "Accept-CH",
    "Accept-Patch",
    "Accept-Ranges",
    "Access-Control-Allow-Credentials",
    "Access-Control-Allow-HeadersAccess-Control-Allow-Origin",
    "Access-Control-Allow-Methods",
    "Access-Control-Allow-Origin",
    "Access-Control-Expose-Headers",
    "Access-Control-Max-Age",
    "Age",
    "Allow",
    "Alt-Svc",
    "Cache-Control",
    "Connection",
    "Content-Disposition",
    "Content-Encoding",
    "Content-Language",
    "Content-Length",
    "Content-Location",
    "Content-MD5",
    "Content-Range",
    "Content-Type",
    "Date",
    "Delta-Base",
    "ETag",
    "Expires",
    "IM",
    "Last-Modified",
    "Location",
    "P3P",
    "Pragma",
    "Preference-Applied",
    "Proxy-Authenticate",
    "Public-Key-Pins",
    "Retry-After",
    "Server",
    "Set-Cookie",
    "Strict-Transport-Security",
    "Tk",
    "Transfer-Encoding",
    "Upgrade",
    "Vary",
    "WWW-Authenticate",
    "Warning",
};
}
