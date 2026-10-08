// /Script/Engine.Canvas
// Derives from: UObject
// size 0x2D0, declared in Engine/Source/Runtime/Engine/Classes/Engine/Canvas.h

UCLASS(Transient)
class UCanvas : public UObject
{
public:
    UPROPERTY() float OrgX;  // 0x0028, size 0x4
    UPROPERTY() float OrgY;  // 0x002C, size 0x4
    UPROPERTY() float ClipX;  // 0x0030, size 0x4
    UPROPERTY() float ClipY;  // 0x0034, size 0x4
    UPROPERTY() FColor DrawColor;  // 0x0038, size 0x4
    UPROPERTY() uint8 bCenterX : 1;  // 0x003C, mask 0x01
    UPROPERTY() uint8 bCenterY : 1;  // 0x003C, mask 0x02
    UPROPERTY() uint8 bNoSmooth : 1;  // 0x003C, mask 0x04
    UPROPERTY() int32 SizeX;  // 0x0040, size 0x4
    UPROPERTY() int32 SizeY;  // 0x0044, size 0x4
    UPROPERTY() FPlane ColorModulate;  // 0x0050, size 0x10
    UPROPERTY() UTexture2D* DefaultTexture;  // 0x0060, size 0x8
    UPROPERTY() UTexture2D* GradientTexture0;  // 0x0068, size 0x8
    UPROPERTY() UReporterGraph* ReporterGraph;  // 0x0070, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    int32 UnsafeSizeX;  // 0x0078
    int32 UnsafeSizeY;  // 0x007C
    int32 SafeZonePadX;  // 0x0080
    int32 SafeZonePadY;  // 0x0084
    int32 SafeZonePadEX;  // 0x0088
    int32 SafeZonePadEY;  // 0x008C
    int32 CachedDisplayWidth;  // 0x0090
    int32 CachedDisplayHeight;  // 0x0094
    FDisplayDebugManager DisplayDebugManager;  // 0x0098
    FCanvas * Canvas;  // 0x0268
    FSceneView * SceneView;  // 0x0270
    FMatrix ViewProjectionMatrix;  // 0x0280
    FQuat HmdOrientation;  // 0x02C0

    UFUNCTION(BlueprintCallable) void K2_Deproject(FVector2D ScreenPosition, FVector& WorldOrigin, FVector& WorldDirection);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void K2_DrawBorder(UTexture* BorderTexture, UTexture* BackgroundTexture, UTexture* LeftBorderTexture, UTexture* RightBorderTexture, UTexture* TopBorderTexture, UTexture* BottomBorderTexture, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize, FLinearColor RenderColor, FVector2D BorderScale, FVector2D BackgroundScale, float Rotation, FVector2D PivotPoint, FVector2D CornerSize);  // parameters 0x84
    UFUNCTION(BlueprintCallable) void K2_DrawBox(FVector2D ScreenPosition, FVector2D ScreenSize, float Thickness, FLinearColor RenderColor);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void K2_DrawLine(FVector2D ScreenPositionA, FVector2D ScreenPositionB, float Thickness, FLinearColor RenderColor);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void K2_DrawMaterial(UMaterialInterface* RenderMaterial, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize, float Rotation, FVector2D PivotPoint);  // parameters 0x34
    UFUNCTION(BlueprintCallable) void K2_DrawMaterialTriangle(UMaterialInterface* RenderMaterial, TArray<FCanvasUVTri> Triangles);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void K2_DrawPolygon(UTexture* RenderTexture, FVector2D ScreenPosition, FVector2D Radius, int32 NumberOfSides, FLinearColor RenderColor);  // parameters 0x2C
    UFUNCTION(BlueprintCallable) void K2_DrawText(UFont* RenderFont, FString RenderText, FVector2D ScreenPosition, FVector2D Scale, FLinearColor RenderColor, float Kerning, FLinearColor ShadowColor, FVector2D ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, FLinearColor OutlineColor);  // parameters 0x68
    UFUNCTION(BlueprintCallable) void K2_DrawTexture(UTexture* RenderTexture, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize, FLinearColor RenderColor, TEnumAsByte<EBlendMode> BlendMode, float Rotation, FVector2D PivotPoint);  // parameters 0x48
    UFUNCTION(BlueprintCallable) void K2_DrawTriangle(UTexture* RenderTexture, TArray<FCanvasUVTri> Triangles);  // parameters 0x18
    UFUNCTION(BlueprintCallable) FVector K2_Project(FVector WorldLocation);  // parameters 0x18
    UFUNCTION(BlueprintCallable) FVector2D K2_StrLen(UFont* RenderFont, FString RenderText);  // parameters 0x20
    UFUNCTION(BlueprintCallable) FVector2D K2_TextSize(UFont* RenderFont, FString RenderText, FVector2D Scale);  // parameters 0x28

    // Virtual functions that start here:
    //   DrawDebugGraph, Reset
};
