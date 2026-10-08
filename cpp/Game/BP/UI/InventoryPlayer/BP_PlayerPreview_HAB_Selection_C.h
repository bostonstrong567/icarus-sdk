// /Game/BP/UI/InventoryPlayer/BP_PlayerPreview_HAB_Selection.BP_PlayerPreview_HAB_Selection_C
// Derives from: ABP_PlayerPreview_HAB_C > ABP_PlayerPreview_C > ABP_ActorPreview_C > AActor > UObject
// size 0x340, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_PlayerPreview_HAB_Selection_C : public ABP_PlayerPreview_HAB_C
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_CharacterSelection_C* CharacterSelectionWidget;  // 0x0338, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) void ResolveVisibility(bool& Visible);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetCharacterSelectionWidget(UUMG_CharacterSelection_C* CharacterSelection);  // parameters 0x8
};
