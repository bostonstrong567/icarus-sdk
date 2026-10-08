// /Game/UI/HUD/UMG_ChatboxEntry.UMG_ChatboxEntry_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x3A0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ChatboxEntry_C : public UUserWidget, public IUserObjectListEntry
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Avatar;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Message;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* PlayerInfo;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* PlayerInfoInvalidationBox;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PlayerName;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UBP_ChatboxItem_C* ChatboxItem;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateFontInfo PlayerFont;  // 0x0298, size 0x58
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateFontInfo LocalFont;  // 0x02F0, size 0x58
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateFontInfo ServerFont;  // 0x0348, size 0x58

    UFUNCTION(BlueprintImplementableEvent) void BP_OnEntryReleased();
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemExpansionChanged(bool bIsExpanded);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemSelectionChanged(bool bIsSelected);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_UMG_ChatboxEntry(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise();
    UFUNCTION(BlueprintImplementableEvent) void OnListItemObjectSet(UObject* ListItemObject);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateMessageFont(TEnumAsByte<EChatMessageType> MessageType);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateMessageText(FString Text);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void UpdatePlayerInfo(TEnumAsByte<EChatMessageType> MessageType);  // parameters 0x1
};
