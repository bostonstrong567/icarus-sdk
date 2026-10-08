// /Game/UI/UMG_ClaimLaunchSettings.UMG_ClaimLaunchSettings_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x270, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ClaimLaunchSettings_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ClaimLaunch_LobbyPrivacy_C* LobbyPrivacy;  // 0x0268, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_ClaimLaunchSettings(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
