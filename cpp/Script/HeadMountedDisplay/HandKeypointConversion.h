// /Script/HeadMountedDisplay.HandKeypointConversion
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/HeadMountedDisplay/Public/HeadMountedDisplayTypes.h

UCLASS()
class UHandKeypointConversion : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 Conv_HandKeypointToInt32(EHandKeypoint input);  // parameters 0x8
};
