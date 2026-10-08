// /Game/UI/Windows/UMG_ItemsToReturn.UMG_ItemsToReturn_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ItemsToReturn_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PlayerReturnedItemsList_C* UMG_PlayerReturnedItemsList;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* VerticalBox_PlayerItemLists;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FLaunchItemReturnInfo> ValidItems;  // 0x0278, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemData> InvalidItems;  // 0x0288, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString CurrentPlayerID;  // 0x0298, size 0x10

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ItemsToReturn(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
