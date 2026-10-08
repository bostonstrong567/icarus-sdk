// /Script/GameplayTasks.GameplayTaskResource
// Derives from: UObject
// size 0x38, declared in Engine/Source/Runtime/GameplayTasks/Classes/GameplayTaskResource.h

UCLASS(Abstract, Config=Game)
class UGameplayTaskResource : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config, BlueprintReadOnly) int32 ManualResourceID;  // 0x0028, size 0x4
    UPROPERTY() int8 AutoResourceID;  // 0x002C, size 0x1
    UPROPERTY(EditAnywhere) uint8 bManuallySetID : 1;  // 0x0030, mask 0x01
};
