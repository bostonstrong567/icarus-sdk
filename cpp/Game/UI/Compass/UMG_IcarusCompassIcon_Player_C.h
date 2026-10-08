// /Game/UI/Compass/UMG_IcarusCompassIcon_Player.UMG_IcarusCompassIcon_Player_C
// Derives from: UUMG_IcarusCompassIcon_C > UIcarusCompassIcon > UUserWidget > UWidget > UVisual > UObject
// size 0x410, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_IcarusCompassIcon_Player_C : public UUMG_IcarusCompassIcon_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0408, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_IcarusCompassIcon_Player(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitialisePlayerColour();
};
