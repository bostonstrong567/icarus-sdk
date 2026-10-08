// /Script/Icarus.FootstepReceiverInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Audio/Footstep/FootstepReceiverInterface.h

UCLASS(Abstract)
class UFootstepReceiverInterface : public UInterface
{
public:

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void ReceivedFootstep(AActor* Actor, FVector Location);  // parameters 0x14
};
