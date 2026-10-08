// /Script/UMG.PanelSlot
// Derives from: UVisual > UObject
// size 0x38, declared in Engine/Source/Runtime/UMG/Public/Components/PanelSlot.h

UCLASS()
class UPanelSlot : public UVisual
{
public:
    UPROPERTY(Instanced) UPanelWidget* Parent;  // 0x0028, size 0x8
    UPROPERTY(Instanced) UWidget* Content;  // 0x0030, size 0x8

    // Virtual functions that start here:
    //   SynchronizeProperties
};
