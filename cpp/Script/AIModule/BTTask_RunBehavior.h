// /Script/AIModule.BTTask_RunBehavior
// Derives from: UBTTaskNode > UBTNode > UObject
// size 0x78, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_RunBehavior.h

UCLASS()
class UBTTask_RunBehavior : public UBTTaskNode
{
public:
    UPROPERTY(EditAnywhere) UBehaviorTree* BehaviorAsset;  // 0x0070, size 0x8

    // Virtual functions that start here:
    //   OnSubtreeDeactivated
};
