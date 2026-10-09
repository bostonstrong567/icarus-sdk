// /Script/Icarus.LadderComponent
// Derives from: UActorComponent > UObject
// size 0xB0, declared in Icarus/Source/Icarus/World/LadderComponent.h

UCLASS(Config=Engine)
class ULadderComponent : public UActorComponent
{
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) FTransform GetLadderEnd();  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) FTransform GetLadderStart();  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) ULadderComponent* GetOutermostLadder();  // parameters 0x8

    // Virtual functions that start here:
    //   GetLadderEnd_Implementation, GetLadderStart_Implementation, GetOutermostLadder_Implementation
};
