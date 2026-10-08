// /Script/Overlay.BasicOverlays
// Derives from: UOverlays > UObject
// size 0x38, declared in Engine/Source/Runtime/Overlay/Public/BasicOverlays.h

UCLASS()
class UBasicOverlays : public UOverlays
{
public:
    UPROPERTY(EditAnywhere) TArray<FOverlayItem> Overlays;  // 0x0028, size 0x10
};
