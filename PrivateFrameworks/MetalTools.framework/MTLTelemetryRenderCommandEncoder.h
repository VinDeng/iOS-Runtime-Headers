/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLTelemetryRenderCommandEncoder : MTLToolsRenderCommandEncoder {
    unsigned int  _reDraws;
    MTLTelemetryCommandBuffer * _telemetryCommandBuffer;
    MTLTelemetryDevice * _telemetryDevice;
}

- (void).cxx_destruct;
- (void)accumDrawWithType:(unsigned int)arg1 indexType:(unsigned int)arg2 primitiveType:(unsigned int)arg3 vertexCount:(unsigned int)arg4 instanceCount:(unsigned int)arg5;
- (void)drawIndexedPrimitives:(unsigned int)arg1 indexCount:(unsigned int)arg2 indexType:(unsigned int)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned int)arg5;
- (void)drawIndexedPrimitives:(unsigned int)arg1 indexCount:(unsigned int)arg2 indexType:(unsigned int)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned int)arg5 instanceCount:(unsigned int)arg6;
- (void)drawIndexedPrimitives:(unsigned int)arg1 indexCount:(unsigned int)arg2 indexType:(unsigned int)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned int)arg5 instanceCount:(unsigned int)arg6 baseVertex:(int)arg7 baseInstance:(unsigned int)arg8;
- (void)drawIndexedPrimitives:(unsigned int)arg1 indexType:(unsigned int)arg2 indexBuffer:(id)arg3 indexBufferOffset:(unsigned int)arg4 indirectBuffer:(id)arg5 indirectBufferOffset:(unsigned int)arg6;
- (void)drawPrimitives:(unsigned int)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned int)arg3;
- (void)drawPrimitives:(unsigned int)arg1 vertexStart:(unsigned int)arg2 vertexCount:(unsigned int)arg3;
- (void)drawPrimitives:(unsigned int)arg1 vertexStart:(unsigned int)arg2 vertexCount:(unsigned int)arg3 instanceCount:(unsigned int)arg4 baseInstance:(unsigned int)arg5;
- (void)endEncoding;
- (void)initTelemetryWithDescriptor:(id)arg1 commandBuffer:(id)arg2;
- (id)initWithRenderCommandEncoder:(id)arg1 parent:(id)arg2 commandBuffer:(id)arg3 descriptor:(id)arg4;
- (id)initWithRenderCommandEncoder:(id)arg1 parent:(id)arg2 descriptor:(id)arg3;
- (void)setDepthClipMode:(unsigned int)arg1;
- (void)setDepthStencilState:(id)arg1;
- (void)setRenderPipelineState:(id)arg1;

@end