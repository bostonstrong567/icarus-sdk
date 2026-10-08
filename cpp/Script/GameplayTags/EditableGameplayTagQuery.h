// /Script/GameplayTags.EditableGameplayTagQuery
// Derives from: UObject
// size 0x98, declared in Engine/Source/Runtime/GameplayTags/Classes/GameplayTagContainer.h

UCLASS(Transient, EditInlineNew)
class UEditableGameplayTagQuery : public UObject
{
public:
    UPROPERTY(EditAnywhere) FString UserDescription;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, Instanced) UEditableGameplayTagQueryExpression* RootExpression;  // 0x0048, size 0x8
    UPROPERTY() FGameplayTagQuery TagQueryExportText_Helper;  // 0x0050, size 0x48

    // Not reflected: the engine's scripting cannot see these.
    FString AutoDescription;  // 0x0038
};
