// /Game/UI/UMG_ClientLogging.UMG_ClientLogging_C
// Derives from: UUMG_UserInterface_Base_C > UUserInterfaceBase > UUserWidget > UWidget > UVisual > UObject
// size 0x3D4, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ClientLogging_C : public UUMG_UserInterface_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UListView* LogList;  // 0x03C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxListItems;  // 0x03D0, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ClientLogging(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitLogList();
    UFUNCTION(BlueprintCallable) void OnLogEntryAdded(const FIcarusLogEntry& LogEntry);  // parameters 0x30
};
