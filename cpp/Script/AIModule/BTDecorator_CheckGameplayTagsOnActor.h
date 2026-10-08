// /Script/AIModule.BTDecorator_CheckGameplayTagsOnActor
// Derives from: UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xC8, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Decorators/BTDecorator_CheckGameplayTagsOnActor.h

UCLASS()
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{
public:
    UPROPERTY(EditAnywhere) FBlackboardKeySelector ActorToCheck;  // 0x0068, size 0x28
    UPROPERTY(EditAnywhere) EGameplayContainerMatchType TagsToMatch;  // 0x0090, size 0x1
    UPROPERTY(EditAnywhere) FGameplayTagContainer GameplayTags;  // 0x0098, size 0x20
    UPROPERTY() FString CachedDescription;  // 0x00B8, size 0x10
};
