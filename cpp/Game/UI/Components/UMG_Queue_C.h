// /Game/UI/Components/UMG_Queue.UMG_Queue_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Queue_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Indicator;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* QueueBorder;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGridPanel* QueueGrid;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DarkTitlebarShort_C* UMG_DarkTitlebarShort;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FQueueElementClicked QueueElementClicked;  // 0x0288, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_CraftingQueueElement_C*> QueueElements;  // 0x0298, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMargin Margin;  // 0x02A8, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_CraftingQueueElement_C* CraftingQueueWidget;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LinkedActor;  // 0x02C0, size 0x8

    UFUNCTION(BlueprintCallable) void AddQueueElement(int32 Location, FProcessingItem Recipe);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void CheckForQueueCountChanges(TArray<FProcessingItem>& Queue);  // parameters 0x10
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void ElementClickedHandler(UUMG_CraftingQueueElement_C* Element);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_UMG_Queue(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetQueueSize(int32& Size);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitialiseQueue(int32 Count);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void QueueElementClicked__DelegateSignature(int32 Location);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RecreateQueue(TArray<FProcessingItem>& Queue);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void RemoveQueueElement(int32 Location);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateTrigger();
};
