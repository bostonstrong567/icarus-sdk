// /Game/BP/Objects/World/Items/Deployables/UMG_ProcessorBase.UMG_ProcessorBase_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x2A0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ProcessorBase_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_DummyObject_C* DummyObject;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBoxComponent* DropCollider;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_HolographicObject_C* CachedPreview;  // 0x0298, size 0x8

    UFUNCTION(BlueprintCallable) FEventReply _3DSpace_MouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160, named "3DSpace_MouseButtonDown"
    UFUNCTION(BlueprintCallable) FEventReply _3DSpace_MouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160, named "3DSpace_MouseButtonUp"
    UFUNCTION(BlueprintCallable) void CloseUI(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ProcessorBase(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateHolographicHover(FItemData Item, TEnumAsByte<ProcessorPreview> State);  // parameters 0x1F1
};
