// /Game/Prototypes/SpaceStationPlayer/UI/UMG_PlayerName.UMG_PlayerName_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x280, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_PlayerName_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_Avatar;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_PlayerName;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) APlayerState* PlayerState;  // 0x0278, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_PlayerName(int32 EntryPoint);  // parameters 0x4
};
