// /Script/InteractiveToolsFramework.TransformGizmoActor
// Derives from: AGizmoActor > AInternalToolFrameworkActor > AActor > UObject
// size 0x2A0, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/TransformGizmo.h

UCLASS(Transient, Config=Engine)
class ATransformGizmoActor : public AGizmoActor
{
public:
    UPROPERTY(Instanced) UPrimitiveComponent* TranslateX;  // 0x0220, size 0x8
    UPROPERTY(Instanced) UPrimitiveComponent* TranslateY;  // 0x0228, size 0x8
    UPROPERTY(Instanced) UPrimitiveComponent* TranslateZ;  // 0x0230, size 0x8
    UPROPERTY(Instanced) UPrimitiveComponent* TranslateYZ;  // 0x0238, size 0x8
    UPROPERTY(Instanced) UPrimitiveComponent* TranslateXZ;  // 0x0240, size 0x8
    UPROPERTY(Instanced) UPrimitiveComponent* TranslateXY;  // 0x0248, size 0x8
    UPROPERTY(Instanced) UPrimitiveComponent* RotateX;  // 0x0250, size 0x8
    UPROPERTY(Instanced) UPrimitiveComponent* RotateY;  // 0x0258, size 0x8
    UPROPERTY(Instanced) UPrimitiveComponent* RotateZ;  // 0x0260, size 0x8
    UPROPERTY(Instanced) UPrimitiveComponent* UniformScale;  // 0x0268, size 0x8
    UPROPERTY(Instanced) UPrimitiveComponent* AxisScaleX;  // 0x0270, size 0x8
    UPROPERTY(Instanced) UPrimitiveComponent* AxisScaleY;  // 0x0278, size 0x8
    UPROPERTY(Instanced) UPrimitiveComponent* AxisScaleZ;  // 0x0280, size 0x8
    UPROPERTY(Instanced) UPrimitiveComponent* PlaneScaleYZ;  // 0x0288, size 0x8
    UPROPERTY(Instanced) UPrimitiveComponent* PlaneScaleXZ;  // 0x0290, size 0x8
    UPROPERTY(Instanced) UPrimitiveComponent* PlaneScaleXY;  // 0x0298, size 0x8
};
