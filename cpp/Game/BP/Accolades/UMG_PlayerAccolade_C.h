// /Game/BP/Accolades/UMG_PlayerAccolade.UMG_PlayerAccolade_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x290, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_PlayerAccolade_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_52;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* SizeBox_59;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAccoladesRowHandle Accolade;  // 0x0270, size 0x18
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_AccoladeTooltip_C* AccoladeTooltip;  // 0x0288, size 0x8

    UFUNCTION(BlueprintCallable) void Init(FAccoladesRowHandle Accolade);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void RefreshState();
};
