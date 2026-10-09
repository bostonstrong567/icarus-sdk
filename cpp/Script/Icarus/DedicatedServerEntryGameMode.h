// /Script/Icarus.DedicatedServerEntryGameMode
// Derives from: AIcarusGameModeBase > AGameMode > AGameModeBase > AInfo > AActor > UObject
// size 0x358, declared in Icarus/Source/Icarus/DedicatedServer/DedicatedServerEntryGameMode.h

UCLASS(Transient, NotPlaceable, Config=Game)
class ADedicatedServerEntryGameMode : public AIcarusGameModeBase
{
private:
    EMissionDifficulty PendingNewProspectDifficulty;  // 0x0318, not reflected
    bool PendingNewProspectHardcore;  // 0x0319, not reflected
    FString PendingNewProspectNameOverride;  // 0x0320, not reflected
    FString PendingTravelURL;  // 0x0330, not reflected
    bool bIsPendingMapChange;  // 0x0340, not reflected
    FTimerHandle MapChangeTimerHandle;  // 0x0348, not reflected
    float MapChangeResponseTime;  // 0x0350, not reflected
public:
    UFUNCTION() void CommitMapChange();
    UFUNCTION(Exec) bool CreateProspect(FString ProspectName, int32 ProspectDifficulty, bool bHardcore, FString ProspectIdOverride);  // parameters 0x29
    UFUNCTION(Exec) bool LoadProspect(FString ProspectId);  // parameters 0x11
    UFUNCTION() void OnClaimProspectFailed(const FResClaimProspect& ClaimProspectResponse);  // parameters 0xA8
    UFUNCTION() void OnClaimProspectSuccess(const FResClaimProspect& ClaimProspectResponse);  // parameters 0xA8
    UFUNCTION() void OnGenerateProspectFailed(const FResGenerateProspects& GenerateProspectResponse);  // parameters 0x18
    UFUNCTION() void OnGenerateProspectSuccess(const FResGenerateProspects& GenerateProspectResponse);  // parameters 0x18
    UFUNCTION(Exec) bool ResumeProspect();  // parameters 0x1
};
