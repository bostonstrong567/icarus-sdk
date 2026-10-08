// /Game/UI/Components/UMG_MissionDifficulty.UMG_MissionDifficulty_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2F0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MissionDifficulty_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* DifficultyIcon;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* DifficultyIcon_1;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* DifficultyIcon_2;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* DifficultyIcon_3;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* DifficultyIcon_4;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* DifficultyIcon_5;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* DifficultyIcon_6;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* DifficultyIcon_7;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor EmptyColour;  // 0x02A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor EasyStyle;  // 0x02B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor HardStyle;  // 0x02C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor ExtremeStyle;  // 0x02D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor NormalStyle;  // 0x02E0, size 0x10

    UFUNCTION(BlueprintCallable) void SetDifficulty(EIcarusProspectDifficulty Difficulty);  // parameters 0x1
};
