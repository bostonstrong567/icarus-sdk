// /Game/UI/UMG_ClaimLaunch_LobbyPrivacy.UMG_ClaimLaunch_LobbyPrivacy_C
// Derives from: UUMG_ArrowSelectionWidget_Text_C > UUMG_ArrowSelectionWidget_Base_C > UUserWidget > UWidget > UVisual > UObject
// size 0x350, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ClaimLaunch_LobbyPrivacy_C : public UUMG_ArrowSelectionWidget_Text_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ELobbyPrivacy DefaultSelection;  // 0x02F8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<ELobbyPrivacy, FText> LobbyPrivacyTexts;  // 0x0300, size 0x50

    UFUNCTION() void ExecuteUbergraph_UMG_ClaimLaunch_LobbyPrivacy(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetLobbyPrivacy(ELobbyPrivacy& LobbyPrivacy);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
