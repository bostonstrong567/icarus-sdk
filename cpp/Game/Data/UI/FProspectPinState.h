// /Game/Data/UI/FProspectPinState.FProspectPinState
// size 0x2E8

USTRUCT()
struct FProspectPinState
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<E_ProspectState> ProspectState;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FButtonStyle ButtonStyle;  // 0x0008, size 0x278
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<TEnumAsByte<E_ButtonState>, FSlateColor> TextColour;  // 0x0280, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor BorderColour;  // 0x02D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESlateVisibility JoinVisible;  // 0x02E0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESlateVisibility HostVisible;  // 0x02E1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESlateVisibility LoadVisible;  // 0x02E2, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESlateVisibility ClaimVisible;  // 0x02E3, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESlateVisibility EndVisible;  // 0x02E4, size 0x1
};
