// /Script/Engine.LevelScriptActor
// Derives from: AActor > UObject
// size 0x228, declared in Engine/Source/Runtime/Engine/Classes/Engine/LevelScriptActor.h

UCLASS(NotPlaceable, Config=Engine)
class ALevelScriptActor : public AActor
{
public:
    UPROPERTY() uint8 bInputEnabled : 1;  // 0x0220, mask 0x01

    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void LevelReset();
    UFUNCTION(BlueprintCallable) bool RemoteEvent(FName EventName);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetCinematicMode(bool bCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);  // parameters 0x5
    UFUNCTION(BlueprintImplementableEvent) void WorldOriginLocationChanged(FIntVector OldOriginLocation, FIntVector NewOriginLocation);  // parameters 0x18

    // Virtual functions that start here:
    //   RemoteEvent, SetCinematicMode
};
