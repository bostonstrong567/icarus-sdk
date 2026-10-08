// /Script/Overlay.LocalizedOverlays
// Derives from: UOverlays > UObject
// size 0x80, declared in Engine/Source/Runtime/Overlay/Public/LocalizedOverlays.h

UCLASS()
class ULocalizedOverlays : public UOverlays
{
public:
    UPROPERTY(EditAnywhere) UBasicOverlays* DefaultOverlays;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere) TMap<FString, UBasicOverlays*> LocaleToOverlaysMap;  // 0x0030, size 0x50
};
