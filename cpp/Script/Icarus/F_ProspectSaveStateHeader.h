// /Script/Icarus.ProspectSaveStateHeader
// size 0xE8, declared in Icarus/Source/Icarus/Systems/Prospects/ProspectSaveState.h

USTRUCT()
struct FProspectSaveStateHeader
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintReadOnly) int32 Version;  // 0x0008, size 0x4
    UPROPERTY(BlueprintReadOnly) ELobbyPrivacy LobbyPrivacy;  // 0x000C, size 0x1
    UPROPERTY(BlueprintReadOnly) FProspectInfo ProspectInfo;  // 0x0010, size 0xA0
    UPROPERTY(BlueprintReadOnly) FString ProspectMapName;  // 0x00B0, size 0x10
    UPROPERTY(BlueprintReadOnly) FDateTime LastSavedDateTime;  // 0x00C0, size 0x8
protected:
    UPROPERTY(Deprecated) FString ProspectID;  // 0x00C8, size 0x10
    UPROPERTY(Deprecated) FString ProspectDTKey;  // 0x00D8, size 0x10
};
