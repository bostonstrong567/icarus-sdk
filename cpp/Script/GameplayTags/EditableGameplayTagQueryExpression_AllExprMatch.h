// /Script/GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
// Derives from: UEditableGameplayTagQueryExpression > UObject
// size 0x38, declared in Engine/Source/Runtime/GameplayTags/Classes/GameplayTagContainer.h

UCLASS(Transient, EditInlineNew)
class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
{
public:
    UPROPERTY(EditAnywhere) TArray<UEditableGameplayTagQueryExpression*> Expressions;  // 0x0028, size 0x10
};
