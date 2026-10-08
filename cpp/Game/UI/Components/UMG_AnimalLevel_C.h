// /Game/UI/Components/UMG_AnimalLevel.UMG_AnimalLevel_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x328, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_AnimalLevel_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* AnimalLevel;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* AnimalLevelEpic;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* AnimalName;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* divider;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* divider_1;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* divider_2;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* divider_3;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* divider_4;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* divider_5;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* EpicAnimalName;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* EpicMob;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* EpicRetainer;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_104;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* RegularMob;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* RegularRetainer;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* skullicon;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveLinearColor* DifficultyColourCurve;  // 0x02E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsEpicMonster;  // 0x02F0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText CreatureName;  // 0x02F8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText EpicCreatureName;  // 0x0310, size 0x18

    UFUNCTION() void ExecuteUbergraph_UMG_AnimalLevel(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateLevel(FAICreatureTypeRowHandle Creature, int32 Level, FEpicCreaturesRowHandle EpicCreature, FText EpicName);  // parameters 0x50
};
