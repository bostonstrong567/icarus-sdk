// /Script/GameplayTasks.GameplayTaskResource
// Derives from: UObject
// size 0x38, declared in Engine/Source/Runtime/GameplayTasks/Classes/GameplayTaskResource.h

UCLASS(Abstract, Config=Game)
class UGameplayTaskResource : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) uint8 bManuallySetID : 1;  // 0x0030, mask 0x01
protected:
    UPROPERTY(EditAnywhere, Config, BlueprintReadOnly) int32 ManualResourceID;  // 0x0028, size 0x4
private:
    UPROPERTY() int8 AutoResourceID;  // 0x002C, size 0x1
};
