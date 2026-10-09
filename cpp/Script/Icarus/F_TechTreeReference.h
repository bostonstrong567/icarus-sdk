// /Script/Icarus.TechTreeReference
// size 0x10, declared in Icarus/Source/Icarus/UI/TechTreeReference.h

USTRUCT()
struct FTechTreeReference
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UPanelWidget* Panel;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName WidgetName;  // 0x0008, size 0x8
};
