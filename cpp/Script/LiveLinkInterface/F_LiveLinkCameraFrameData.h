// /Script/LiveLinkInterface.LiveLinkCameraFrameData
// size 0xF0, declared in Engine/Source/Runtime/LiveLinkInterface/Public/Roles/LiveLinkCameraTypes.h

USTRUCT()
struct FLiveLinkCameraFrameData : public FLiveLinkTransformFrameData
{
public:
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float FieldOfView;  // 0x00D0, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float AspectRatio;  // 0x00D4, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float FocalLength;  // 0x00D8, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float Aperture;  // 0x00DC, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float FocusDistance;  // 0x00E0, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) ELiveLinkCameraProjectionMode ProjectionMode;  // 0x00E4, size 0x1
};
