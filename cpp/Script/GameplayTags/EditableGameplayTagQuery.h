// /Script/GameplayTags.EditableGameplayTagQuery
// Derives from: UObject
// size 0x98, declared in Engine/Source/Runtime/GameplayTags/Classes/GameplayTagContainer.h

UCLASS(Transient, EditInlineNew)
class UEditableGameplayTagQuery : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) FString UserDescription;  // 0x0028, size 0x10
    FString AutoDescription;  // 0x0038, not reflected
    UPROPERTY(EditAnywhere, Instanced) UEditableGameplayTagQueryExpression* RootExpression;  // 0x0048, size 0x8
private:
    UPROPERTY() FGameplayTagQuery TagQueryExportText_Helper;  // 0x0050, size 0x48
};
