// /Script/AIModule.BTTask_MoveDirectlyToward
// Derives from: UBTTask_MoveTo > UBTTask_BlackboardBase > UBTTaskNode > UBTNode > UObject
// size 0xB8, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_MoveDirectlyToward.h

UCLASS(Config=Game)
class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY() uint8 bDisablePathUpdateOnGoalLocationChange : 1;  // 0x00B0, mask 0x01
    UPROPERTY() uint8 bProjectVectorGoalToNavigation : 1;  // 0x00B0, mask 0x02
private:
    UPROPERTY() uint8 bUpdatedDeprecatedProperties : 1;  // 0x00B0, mask 0x04
};
