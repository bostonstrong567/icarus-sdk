// /Game/UI/Windows/StaticWidget.StaticWidget
// size 0x10

USTRUCT()
struct StaticWidget
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EStaticUIWidgets> Type;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUserWidget* Widget;  // 0x0008, size 0x8
};
