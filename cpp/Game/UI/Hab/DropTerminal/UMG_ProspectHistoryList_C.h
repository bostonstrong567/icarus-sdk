// /Game/UI/Hab/DropTerminal/UMG_ProspectHistoryList.UMG_ProspectHistoryList_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x290, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ProspectHistoryList_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UListView* MultiplayerList;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* MultiplayerVertBox;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSelectProspect SelectProspect;  // 0x0278, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle Handle;  // 0x0288, size 0x8

    UFUNCTION(BlueprintCallable) void AddProspectToList(UProspectHistoryResult* ProspectResult);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ProspectHistoryList(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RefreshList();
    UFUNCTION(BlueprintCallable) void SelectProspect__DelegateSignature(FProspectServerInfo ProspectInfo, bool Active);  // parameters 0x1B1
};
