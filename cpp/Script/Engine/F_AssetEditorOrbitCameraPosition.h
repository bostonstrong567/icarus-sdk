// /Script/Engine.AssetEditorOrbitCameraPosition
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Engine/StaticMesh.h

USTRUCT()
struct FAssetEditorOrbitCameraPosition
{
public:
    UPROPERTY() bool bIsSet;  // 0x0000, size 0x1
    UPROPERTY() FVector CamOrbitPoint;  // 0x0004, size 0xC
    UPROPERTY() FVector CamOrbitZoom;  // 0x0010, size 0xC
    UPROPERTY() FRotator CamOrbitRotation;  // 0x001C, size 0xC
};
