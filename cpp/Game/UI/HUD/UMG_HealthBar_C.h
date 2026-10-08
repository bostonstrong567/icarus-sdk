// /Game/UI/HUD/UMG_HealthBar.UMG_HealthBar_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_HealthBar_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* BaseHealthBar;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* Food1HealthBar;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* Food2HealthBar;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* Food3HealthBar_2;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ShelterIcon;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ModifierState_C* UMG_ModifierState;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ModifierState_C* UMG_ModifierState_1;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ModifierState_C* UMG_ModifierState_2;  // 0x0298, size 0x8
};
