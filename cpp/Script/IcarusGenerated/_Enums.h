// /Script/IcarusGenerated.ECharacterAttribute
UENUM()
enum class ECharacterAttribute : uint8
{
    Health = 0,
    Stamina = 1,
    Strength = 2,
    Agility = 3,
    Perception = 4,
    MaxCharacterAttribute = 5,
};

// /Script/IcarusGenerated.EDropshipPartType
UENUM()
enum class EDropshipPartType : uint8
{
    DropshipPartType_UndefinedID = 0,
    DropshipType_TOP = 1,
    DropshipType_MID = 2,
    DropshipType_BTM = 3,
};

// /Script/IcarusGenerated.EDropshipType
UENUM()
enum class EDropshipType : uint8
{
    DropshipType_UndefinedID = 0,
    DropshipType_Player = 1,
    DropshipType_Equipment = 2,
};

// /Script/IcarusGenerated.EMetaInventoryID
UENUM()
enum class EMetaInventoryID : uint8
{
    MetaInventoryID_UndefinedID = 0,
    MetaInventoryID_Main = 1,
    MetaInventoryID_DropLoadout = 2,
};

// /Script/IcarusGenerated.EMissionDifficulty
UENUM()
enum class EMissionDifficulty : uint8
{
    None = 0,
    Easy = 1,
    Medium = 2,
    Hard = 3,
    Extreme = 4,
};

// /Script/IcarusGenerated.ENotificationType
UENUM()
enum class ENotificationType : uint8
{
    Server = 0,
    General = 1,
    MissionSummary = 2,
    ItemRecovery = 3,
    ProspectComplete = 4,
    MaxNotificationTypes = 5,
};

// /Script/IcarusGenerated.EProspectLocation
UENUM()
enum class EProspectLocation : uint8
{
    Unknown = 0,
    Hab = 1,
    Prospect_Conifer = 2,
    Prospect_Arctic = 3,
    Prospect_Cave = 4,
    Prospect_Desert = 5,
    Prospect_Grasslands = 6,
    Prospect_Volcanic = 7,
    Prospect_Swamp = 8,
    Prospect_Geothermal = 9,
    Prospect_Tundra = 10,
    Prospect_Coastal = 11,
    Prospect_Jungle = 12,
};

// /Script/IcarusGenerated.EProspectState
UENUM()
enum class EProspectState : uint8
{
    Unclaimed = 0,
    Claimed = 1,
    Active = 2,
    Ended = 3,
    MaxProspectStates = 4,
};

// /Script/IcarusGenerated.EUpdateProspectFailure
UENUM()
enum class EUpdateProspectFailure : uint8
{
    UpdateProspectFailure_UndefinedID = 0,
    UpdateProspectFailure_NotHost = 1,
    UpdateProspectFailure_Expired = 2,
    UpdateProspectFailure_NotNewer = 3,
    UpdateProspectFailure_Other = 4,
};
