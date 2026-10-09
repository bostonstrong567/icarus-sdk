// /Script/AdvancedSteamSessions.BPSteamGroupOfficer
// size 0x28, declared in Icarus/Plugins/AdvancedSteamSessions/Source/AdvancedSteamSessions/Classes/SteamRequestGroupOfficersCallbackProxy.h

USTRUCT()
struct FBPSteamGroupOfficer
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FBPUniqueNetId OfficerUniqueNetID;  // 0x0000, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bIsOwner;  // 0x0020, size 0x1
};
