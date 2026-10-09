// /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// Derives from: AActor > UObject
// size 0x308, declared in Engine/Source/Runtime/Experimental/GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionDebugDrawActor.h

UCLASS(Config=Engine)
class AGeometryCollectionDebugDrawActor : public AActor
{
public:
    UPROPERTY(EditAnywhere) FGeometryCollectionDebugDrawWarningMessage WarningMessage;  // 0x0220, size 0x1
    UPROPERTY(EditAnywhere) FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody;  // 0x0228, size 0x18
    UPROPERTY(EditAnywhere) bool bDebugDrawWholeCollection;  // 0x0240, size 0x1
    UPROPERTY(EditAnywhere) bool bDebugDrawHierarchy;  // 0x0241, size 0x1
    UPROPERTY(EditAnywhere) bool bDebugDrawClustering;  // 0x0242, size 0x1
    UPROPERTY(EditAnywhere) EGeometryCollectionDebugDrawActorHideGeometry HideGeometry;  // 0x0243, size 0x1
    UPROPERTY(EditAnywhere) bool bShowRigidBodyId;  // 0x0244, size 0x1
    UPROPERTY(EditAnywhere) bool bShowRigidBodyCollision;  // 0x0245, size 0x1
    UPROPERTY(EditAnywhere) bool bCollisionAtOrigin;  // 0x0246, size 0x1
    UPROPERTY(EditAnywhere) bool bShowRigidBodyTransform;  // 0x0247, size 0x1
    UPROPERTY(EditAnywhere) bool bShowRigidBodyInertia;  // 0x0248, size 0x1
    UPROPERTY(EditAnywhere) bool bShowRigidBodyVelocity;  // 0x0249, size 0x1
    UPROPERTY(EditAnywhere) bool bShowRigidBodyForce;  // 0x024A, size 0x1
    UPROPERTY(EditAnywhere) bool bShowRigidBodyInfos;  // 0x024B, size 0x1
    UPROPERTY(EditAnywhere) bool bShowTransformIndex;  // 0x024C, size 0x1
    UPROPERTY(EditAnywhere) bool bShowTransform;  // 0x024D, size 0x1
    UPROPERTY(EditAnywhere) bool bShowParent;  // 0x024E, size 0x1
    UPROPERTY(EditAnywhere) bool bShowLevel;  // 0x024F, size 0x1
    UPROPERTY(EditAnywhere) bool bShowConnectivityEdges;  // 0x0250, size 0x1
    UPROPERTY(EditAnywhere) bool bShowGeometryIndex;  // 0x0251, size 0x1
    UPROPERTY(EditAnywhere) bool bShowGeometryTransform;  // 0x0252, size 0x1
    UPROPERTY(EditAnywhere) bool bShowBoundingBox;  // 0x0253, size 0x1
    UPROPERTY(EditAnywhere) bool bShowFaces;  // 0x0254, size 0x1
    UPROPERTY(EditAnywhere) bool bShowFaceIndices;  // 0x0255, size 0x1
    UPROPERTY(EditAnywhere) bool bShowFaceNormals;  // 0x0256, size 0x1
    UPROPERTY(EditAnywhere) bool bShowSingleFace;  // 0x0257, size 0x1
    UPROPERTY(EditAnywhere) int32 SingleFaceIndex;  // 0x0258, size 0x4
    UPROPERTY(EditAnywhere) bool bShowVertices;  // 0x025C, size 0x1
    UPROPERTY(EditAnywhere) bool bShowVertexIndices;  // 0x025D, size 0x1
    UPROPERTY(EditAnywhere) bool bShowVertexNormals;  // 0x025E, size 0x1
    UPROPERTY(EditAnywhere) bool bUseActiveVisualization;  // 0x025F, size 0x1
    UPROPERTY(EditAnywhere) float PointThickness;  // 0x0260, size 0x4
    UPROPERTY(EditAnywhere) float LineThickness;  // 0x0264, size 0x4
    UPROPERTY(EditAnywhere) bool bTextShadow;  // 0x0268, size 0x1
    UPROPERTY(EditAnywhere) float TextScale;  // 0x026C, size 0x4
    UPROPERTY(EditAnywhere) float NormalScale;  // 0x0270, size 0x4
    UPROPERTY(EditAnywhere) float AxisScale;  // 0x0274, size 0x4
    UPROPERTY(EditAnywhere) float ArrowScale;  // 0x0278, size 0x4
    UPROPERTY(EditAnywhere) FColor RigidBodyIdColor;  // 0x027C, size 0x4
    UPROPERTY(EditAnywhere) float RigidBodyTransformScale;  // 0x0280, size 0x4
    UPROPERTY(EditAnywhere) FColor RigidBodyCollisionColor;  // 0x0284, size 0x4
    UPROPERTY(EditAnywhere) FColor RigidBodyInertiaColor;  // 0x0288, size 0x4
    UPROPERTY(EditAnywhere) FColor RigidBodyVelocityColor;  // 0x028C, size 0x4
    UPROPERTY(EditAnywhere) FColor RigidBodyForceColor;  // 0x0290, size 0x4
    UPROPERTY(EditAnywhere) FColor RigidBodyInfoColor;  // 0x0294, size 0x4
    UPROPERTY(EditAnywhere) FColor TransformIndexColor;  // 0x0298, size 0x4
    UPROPERTY(EditAnywhere) float TransformScale;  // 0x029C, size 0x4
    UPROPERTY(EditAnywhere) FColor LevelColor;  // 0x02A0, size 0x4
    UPROPERTY(EditAnywhere) FColor ParentColor;  // 0x02A4, size 0x4
    UPROPERTY(EditAnywhere) float ConnectivityEdgeThickness;  // 0x02A8, size 0x4
    UPROPERTY(EditAnywhere) FColor GeometryIndexColor;  // 0x02AC, size 0x4
    UPROPERTY(EditAnywhere) float GeometryTransformScale;  // 0x02B0, size 0x4
    UPROPERTY(EditAnywhere) FColor BoundingBoxColor;  // 0x02B4, size 0x4
    UPROPERTY(EditAnywhere) FColor FaceColor;  // 0x02B8, size 0x4
    UPROPERTY(EditAnywhere) FColor FaceIndexColor;  // 0x02BC, size 0x4
    UPROPERTY(EditAnywhere) FColor FaceNormalColor;  // 0x02C0, size 0x4
    UPROPERTY(EditAnywhere) FColor SingleFaceColor;  // 0x02C4, size 0x4
    UPROPERTY(EditAnywhere) FColor VertexColor;  // 0x02C8, size 0x4
    UPROPERTY(EditAnywhere) FColor VertexIndexColor;  // 0x02CC, size 0x4
    UPROPERTY(EditAnywhere) FColor VertexNormalColor;  // 0x02D0, size 0x4
    UPROPERTY(Instanced) UBillboardComponent* SpriteComponent;  // 0x02D8, size 0x8
private:
    FConsoleVariableSinkHandle ConsoleVariableSinkHandle;  // 0x02E0, not reflected
    FDelegateHandle DebugDrawTextDelegateHandle;  // 0x02E8, not reflected
    TArray<AGeometryCollectionDebugDrawActor::FDebugDrawText,TSizedDefaultAllocator<32> > DebugDrawTexts;  // 0x02F0, not reflected
    bool bNeedsDebugLinesFlush;  // 0x0300, not reflected
};
