// /Script/Icarus.ConfirmationPopupDetails
// size 0x98, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/IcarusPlayerControllerSurvival.generated.h

USTRUCT()
struct FConfirmationPopupDetails
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Description;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText OptionA;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText OptionB;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* OptionAAudioOverride;  // 0x0048, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* OptionBAudioOverride;  // 0x0050, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUserWidget* ContentWidget;  // 0x0058, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UUserWidget> ContentWidgetClass;  // 0x0060, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* OptionAIcon;  // 0x0068, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* OptionBIcon;  // 0x0070, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor OptionATint;  // 0x0078, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor OptionBTint;  // 0x0088, size 0x10
};
