// /Script/AugmentedReality.ARActor
// Derives from: AActor > UObject
// size 0x220, declared in Engine/Source/Runtime/AugmentedReality/Public/ARActor.h

UCLASS(Config=Engine)
class AARActor : public AActor
{
public:

    UFUNCTION(BlueprintCallable) UARComponent* AddARComponent(TSubclassOf<UARComponent> InComponentClass, const FGuid& NativeID);  // parameters 0x20
};
