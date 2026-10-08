// /Game/UI/Windows/UMG_DeployableModifiersList.UMG_DeployableModifiersList_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2E2, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DeployableModifiersList_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Alterations;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AlterationsDivider;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Connections;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ResourceConnectionState_C* CrudeOil;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DeployableModifiers_C* DeployableModifiers;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ResourceConnectionState_C* Electricity;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ResourceConnectionState_C* Fuel;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ItemAlterations;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ItemAlterations_1;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ResourceConnections;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ScaleableFrame_C* UMG_ScaleableFrame;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ResourceConnectionState_C* Water;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Linked_Actor;  // 0x02C8, size 0x8, named "Linked Actor"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasContent;  // 0x02D0, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUserWidget* Auto_Hide_Widget_if_No_Content;  // 0x02D8, size 0x8, named "Auto Hide Widget if No Content"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESlateVisibility HasContentVisibility;  // 0x02E0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESlateVisibility NoContentVisibility;  // 0x02E1, size 0x1

    UFUNCTION() void ExecuteUbergraph_UMG_DeployableModifiersList(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FixDividers();
    UFUNCTION(BlueprintCallable) void Initialise(AActor* LinkedActor, UUserWidget* AutoHideWidgetIfNoContent);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void InitialiseAlterations();
    UFUNCTION(BlueprintCallable) void InitialiseConnections();
    UFUNCTION(BlueprintCallable) void OnModifiersChanged();
    UFUNCTION(BlueprintCallable) void UpdateHasContent();
};
