// /Game/UI/Popups/UMG_Spawnblockers.UMG_Spawnblockers_C
// Derives from: UW_ProjectionWidget_C > UHuntingWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x300, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Spawnblockers_C : public UW_ProjectionWidget_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBackgroundBlur* BackgroundBlur_0;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MainOverlay;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* ModifierOverlay;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Pointer;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Radius;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* RetainerBox_0;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Status;  // 0x02E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusActor* Cached_Current_Item;  // 0x02F0, size 0x8, named "Cached Current Item"
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_DeployableModifiersList_C* ModifierList;  // 0x02F8, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_Spawnblockers(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TickWidget();
    UFUNCTION(BlueprintCallable) void UpdateVisuals();
};
