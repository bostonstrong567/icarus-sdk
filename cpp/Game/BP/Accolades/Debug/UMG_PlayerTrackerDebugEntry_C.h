// /Game/BP/Accolades/Debug/UMG_PlayerTrackerDebugEntry.UMG_PlayerTrackerDebugEntry_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x290, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_PlayerTrackerDebugEntry_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_51;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FPlayerTrackersRowHandle PlayerTracker;  // 0x0270, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Amount;  // 0x0288, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Lifetime;  // 0x028C, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_PlayerTrackerDebugEntry(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnRep_PlayerTracker();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
